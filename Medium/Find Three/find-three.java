/*package whatever //do not write package name here */
 
import java.util.*;
import java.lang.*;
import java.io.*;
 
class GFG {
public static void main (String[] args) {
//code
Scanner scn = new Scanner(System.in); 
int T = scn.nextInt(); 
while(T-- >0){
    int N = scn.nextInt(); 
    int[] arr = new int[N]; 
    int[] bitArr = new int[32];
    
    for(int i=0;i<N;i++){
        arr[i] = scn.nextInt();
    }
    
    for(int i=0;i<N;i++){
        int temp = arr[i]; 
        int index =0;
        while(temp != 0){
            if((temp & 1)==1){
                bitArr[index]+=1;
              //  System.out.println("num :"+arr[i]);
              //  System.out.println("index: "+index);
                
                
            }
            temp = temp>>1;
            index +=1;
        }
    }
    
    boolean state = false;
    for(int i:bitArr){
        if(i>=3){
            System.out.println("YES");
            state = true;
            break;
        }
    }
    if(state == false){
        System.out.println("NO");
    }
  
  //for(int i:bitArr){
  //    System.out.print(i+" ");
  //}
  
    
}
}
}