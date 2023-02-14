import java.util.*;
class quicksort {
    String sortarr [];
    int length;
    void input(){
        int itr = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("\n Total Number Of String");
        length= sc.nextInt ();
        this.sortarr = new String [length];
        while (length> itr){
            System.out.print("\n" +(itr+1)+" th String: \n");
            sortarr [itr] = sc. next();
            itr ++;
        }
        sort (0, length - 1); 
    }
    void sort (int l, int h){
        int higher = h;
        int lower = l;
        String pivot = sortarr [ lower +( higher-lower )/2];
        while (lower <= higher){
            while (sortarr[lower].compareToIgnoreCase (pivot)< 0){
                lower++;
            }
            while (sortarr[higher].compareToIgnoreCase (pivot )>0){
                higher--;
            }
            if (lower <= higher){
                swap (higher, lower);
                lower++;
                higher--; 
            }
        }
        if (l<higher){
            sort (l, higher);
        }
        if (lower <h){
            sort (lower, h);
        }
    }
    void swap (int higher, int lower){
        String temp = sortarr [ lower];
        sortarr [lower] = sortarr [higher];
        sortarr [higher] = temp;
    }
    void display(){
        quicksort sort1= new quicksort ();
        for (String c: sortarr){ 
        System.out.println(" \n "+c);
        }
    }
    public static void main(String[] args)
    {
        while (true){
            Scanner s = new Scanner (System.in); 
            quicksort st= new quicksort ();
            int op = 0;
            while(true)
            {
                System.out.println ("\n\n Menu \n\n 1-input \n 2-sort and display \n 3-EXIT");
                System.out.println("enter your choice :");
                op=s.nextInt ();
                switch (op)
                {
                    case 1: st. input (); 
                            break;
                    case 2: st. display();
                            break;
                    case 3: System.exit (0);
                    default: System.out.println("error");
                }
            }
        }
    }
}