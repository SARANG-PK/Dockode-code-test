using System;
					
public class Program
{
	public static void Main()
	{
		Console.WriteLine("Enter n");
		int n = Convert.ToInt32(Console.ReadLine());
		if(n>0){
		for(int i=0;i<n;i++)
		{
			int numberOfSpace = 4*i;
			var printer="";
			for(int a=0;a<numberOfSpace+i+1;a++)
			{
				printer+=" ";
			}
			Console.WriteLine(printer+"----");

			printer="";
			numberOfSpace=4*(i+1);
			for(int a=0;a<numberOfSpace+i;a++)
			{
				printer+=" ";
			}
			for(var c=0;c<2;c++)
			{
			Console.WriteLine("|"+printer+"|");
			}
		}
		
		n=(n*4)+(n-1);
		var printer2=" ";
		for (int i=0;i<n;i++)
		{
			printer2+="-";	
		}
		Console.WriteLine(printer2);
		}
	}
}
