
import java.util.*;
public class Word
{
        public static void main(String[] args) 
        {
		int count=0;
		Scanner sc=new Scanner(System.in);
		String sent=sc.nextLine();
    String[] array=sent.split(" ");
		String str=sc.next();
		for(int i=0;i<array.length;i++)
		{
			if(array[i].equals(str))
			{
				count++;
			}
		}
		System.out.println(count);

	}
}
