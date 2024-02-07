/*package whatever //do not write package name here */
 
import java.util.*;
import java.lang.*;
import java.io.*;
 
class GFG {
public static void main (String[] args) {
Scanner scn = new Scanner(System.in);
int T = scn.nextInt(); 
while(T-- >0){
    int N = scn.nextInt();
    int Q = scn.nextInt(); 
    
    int[] arr = new int[N];
    
    for(int i=0;i<N;i++){
        arr[i] = scn.nextInt();
    }
    
    
    
     while(Q-- >0){
         int L = scn.nextInt(); 
         int R = scn.nextInt(); 
         
         int[] subArr = new int[101];
         boolean state = false;
         
         for(int i=L;i<=R;i++){
          //   System.out.println(subArr[arr[i-1]]);
            if(subArr[arr[i-1]] != 0){
                
                System.out.println("NO");
                state = true;
                break;
            }
            else{
                subArr[arr[i-1]]= 1;
            }
            
            
         }
         if(!state){
                System.out.println("YES");
            }
     }
}
}
}