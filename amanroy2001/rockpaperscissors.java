package cwa;
import java.util.Scanner;
public class rockpaperscissors {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner sc= new Scanner(System.in);
int a=(int) (0 +(Math.random()*3));
//System.out.print(a);
System.out.println("plsese enter scissor(0),rock(1) and paper(2)");
int b=sc.nextInt();
switch(a) {
case 0:
	System.out.println("the computer is scissor");
	break;
case 1:
	System.out.println("the computer is rock");
	break;
case 2:
	System.out.println("the computer is paper");
	break;
	default:
		System.out.println("some problem");
}
switch(b)
{
case 0:
	System.out.println("you are scissor");
	break;
case 1:
	System.out.println(" you are rock");
	break;
case 2:
	System.out.println("you are paper");
	break;
	default:
		System.out.println("some problem");
}
if(a==b)
	System.out.println("its draw");
else
{
	boolean win=(b==0 && a==2) || (b==1 && a==0) || (b==2 && a==1);
	if(win)
		System.out.println("you won");
	else
		System.out.println("you lose");
}
	}

}
