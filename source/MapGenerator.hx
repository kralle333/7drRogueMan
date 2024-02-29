package;
import flixel.*;
import flixel.tile.*;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import flixel.util.FlxStringUtil;
import haxe.Log;
import states.PlayState;

class MapGenerator
{
	private static var threeHor = [new FlxPoint(0, 0), new FlxPoint(1, 0), new FlxPoint(2, 0)];
	private static var threeVer = [new FlxPoint(0, 0), new FlxPoint(0, 1), new FlxPoint(0, 2)];
		
	private static var LSouthWest = [new FlxPoint(0, 0), new FlxPoint(0, 1), new FlxPoint(1, 1)];
	private static var LSouthEast = [new FlxPoint(0, 0), new FlxPoint(1, 0 ), new FlxPoint(1, -1)];
	private static var LNorthWest = [new FlxPoint(0, 0), new FlxPoint(-1, 0), new FlxPoint(-1, 1)];
	private static var LNorthEast = [new FlxPoint(0, 0), new FlxPoint(0, -1 ), new FlxPoint(1, -1)];
	
	private static var fourBlock = [new FlxPoint(0, 0), new FlxPoint(0, 1), new FlxPoint(1, 0), new FlxPoint(1, 1)];
	private static var point = [new FlxPoint(0, 0)];
	
	private static var blockTypes:Array<Array<FlxPoint>> = new Array < Array < FlxPoint >> ();
	
	
	private static var gridWidth:Int = 9;
	private static var gridHeight:Int = 9;
	private static var grid = new Array<Array<Int>>();
	
	private static var blockName:Int = 1;
	
	private function new() 
	{

	}
	public static function init():Void
	{
		blockTypes[0] = threeHor;
		blockTypes[1] = threeVer;
		blockTypes[2] = LSouthWest;
		blockTypes[3] = LSouthEast;
		blockTypes[4] = LNorthWest;
		blockTypes[5] = LNorthEast;
		blockTypes[6] = fourBlock;
		blockTypes[7] = point;
	}
	
	public static function generateMap(depth:Int):String
	{
		
		for (x in 0...gridWidth)
		{
			grid[x] = new Array<Int>();
			for (y in 0...gridHeight)
			{
				grid[x][y] = 0;
			}
		}
		
		while (!isGridFull())
		{
			var randType:Array<FlxPoint> = blockTypes[FlxRandom.intRanged(0, blockTypes.length-1)];
			var randPos = getRandomEmptyPos();
			if (placeIfFit(randPos, randType))
			{
				//printGrid();
			}
		}
		
		var map:Array<Array<Int>> = new Array<Array<Int>>();
		var line:List<Int> = new List<Int>();
		//Add spaces downwards
		for (x in 0...gridWidth)
		{
			line.clear();
			line.add(1);
			if (x == 0)
			{
				line.add(1);
			}
			else
			{	
				line.add(0);
			}
			map[x] = new Array<Int>();
			for (y in 0...gridHeight-1)
			{
				var first:Int = grid[x][y];
				var second:Int = grid[x][y + 1];
				
				//First block
				line.add(first);
				
				//Add a wall more if the next block is same type, otherwise walking spot
				if (first != 0 && first == second)
				{
					line.add(first);
				}
				else if (y == gridHeight - 2)
				{
					line.add(second);
				}
				else
				{
					line.add(0);
				}
			}
			
			if (x == 0 || x== gridWidth-1)
			{
				line.add(1);
			}
			else
			{	
				line.add(0);
			}
			line.add(1);
			for (i in 0...line.length)
			{
				
				map[x][i] = Std.int(line.pop());
			}
		}

		//Add spaces to the side
		for (y in 0...map[0].length)
		{
			line.clear();
			line.add(1);
			if (y== 0|| y==map[0].length-1)
			{
				line.add(1);
			}
			else
			{	
				line.add(0);
			}
			for (x in 0...grid.length-1)
			{

				var first:Int = map[x][y];
				var second:Int = map[x+1][y];
				
				//First block
				if (y == map[0].length - 2)
				{
					line.add(0);
				}
				else
				{
					line.add(second);
				}
				
				
				//Add a wall more if the next block is same type, otherwise walking spot
				if (first != 0 && first == second)
				{
					line.add(first);
				}
				else if (x == grid.length- 2)
				{
					line.add(first);
				}
				else
				{
					line.add(0);
				}
			}
			if (y == 0 || y==map[0].length-1)
			{
				line.add(1);
			}
			else
			{	
				line.add(0);
			}
			line.add(1);
			for (i in 0...line.length)
			{
				if (map[i] == null)
				{
					map[i] = new Array<Int>();	
				}
				var value:Int = line.pop();
			
				map[i][y] = value;
			}
		}
		
		//Tunnel:
		var randX:Int = FlxRandom.intRanged(4, 16);
		
		map[randX][0] = 0;
		if (depth < 11)
		{
			map[randX][map[0].length - 1] = 0;
		}

		
		//Change blocks to 1(walls)
		var oneDim:Array<Int> = new Array<Int>();
		for (x in 0...map.length)
		{
			for (y in 0...map[x].length)
			{
				if (map[x][y] > 0)
				{
					map[x][y] = 1;
				}
				else
				{
					map[x][y] = 2;
				}
				oneDim[y * map.length + x] = map[x][y];
			}
		}
		
		return FlxStringUtil.arrayToCSV(oneDim,map.length);
	}
	
	private static function getRandomEmptyPos()
	{
		while (true)
		{
			var randPos:FlxPoint = new FlxPoint(FlxRandom.intRanged(0, gridWidth-1), FlxRandom.intRanged(0, gridHeight-1));
			if (grid[Std.int(randPos.x)][Std.int(randPos.y)] == 0)
			{
				return randPos;
			}
		}
		return null;
	}
	
	private static function isGridFull():Bool
	{
		
		for (x in 0...gridWidth)
		{
			for (y in 0...gridHeight)
			{
				if (grid[x][y] == 0)
				{
					return false;
				}
			}
		}
		return true;
	}
	
	private static function printGrid()
	{
		var gridMessage:String = "\n";
					for (y in 0...gridHeight)
			{
		for (x in 0...gridWidth)
		{

				gridMessage+=Std.string(grid[x][y])+",";
			}
			gridMessage+= "\n";
		}
		trace(gridMessage);
		return true;
	}
	private static function placeIfFit(position:FlxPoint,type:Array<FlxPoint>):Bool
	{
		var newPos:FlxPoint = new FlxPoint();
		for (i in 0...type.length)
		{
			newPos.x = position.x+type[i].x;
			newPos.y = position.y+type[i].y;

			if (newPos.x<0 || newPos.y<0 || newPos.x>=gridWidth || newPos.y>=gridHeight || grid[Std.int(newPos.x)][Std.int(newPos.y)] !=0)
			{
				var j:Int = i - 1;
				while(j>=0)
				{
					newPos.x = position.x+type[j].x;
					newPos.y = position.y+type[j].y;
					grid[Std.int(newPos.x)][Std.int(newPos.y)] = 0;
					j--;
				}
				return false;
			}
			else
			{
				grid[Std.int(newPos.x)][Std.int(newPos.y)] = blockName;
			}
		}
		blockName++;
		return true;
	}
}