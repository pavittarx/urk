# Java Intro

```java
 class Main{
    public static void main(String[] args){
	    System.out.println("Hello World");
	}
  }
```

### User Input

```java 
public class Main{
  public static void main(String[] args){
    Scanner scn = new Scanner(System.in);
	System.out.println("\n Number:");
	int x = scn.nextInt();
	
	// New line, whitespace character is not picked up by nextInt
	scn.skip("((?<!\\R)\\s)*");

    System.out.println("\n String: ");
    String str = scn.nextLine();
  }
}
```