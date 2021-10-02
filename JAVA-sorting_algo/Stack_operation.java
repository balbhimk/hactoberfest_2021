import java.util.Scanner;  // import java scanner library



class stack{
    int t=0,i;
    int s[] = new int[20];


    void push(){
        Scanner sc = new Scanner(System.in);  //create scanner for push function

        if(t == 19){
            System.out.println("Stack overflow");
        }
        else{
            System.out.println("Enter the data wants to push:"); //read the number wants to push
            int data = sc.nextInt();
            t++;                                            // increment t
            s[t]=data;                                      //assign value to t position of array

            System.out.println("t = " + t);
            display();

        }
       
    }
    void pop(){
        if(t==0){
            System.out.println("Stack underflow");

        }
        else{                                                //Delete the top element in stack
            System.out.println("Deleting the element" + s[t]);
            t--;
            display();

            

        }

    }

    void display(){
                                                                //print all stack elements
        System.out.println("The stack data is :");

        for(i=1;i<=t;i++){
            System.out.println(s[i]);
        }
        
    }
    
    void exit(){
        return;
    }


}
public class Stack_operation {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        stack s1 = new stack();                             //object for function
        do{                                                   // Using do while for repeatation

        System.out.println("Choose option \n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter the option: ");
        int option = sc.nextInt();                              // User input for read the option

        

        switch(option){                                         // a switch function to select the option
            case 1:
                s1.push();
                break;
            case 2:
                s1.pop();
                break;
            case 3:
                s1.display();
                break;
                
            case 4:
                s1.exit();
        }


    }while(true);
        
    }
    
}
