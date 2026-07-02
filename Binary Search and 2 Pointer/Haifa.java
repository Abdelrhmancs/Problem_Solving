import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0){
            int n = in.nextInt();
            int m = in.nextInt();
            ArrayList<Long> a = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                long x = in.nextLong();
                a.add(x);
            }
           Collections.sort(a);
            ArrayList<Long> b = new ArrayList<>();
            for (int i = 0 , j = n/2 +1; i <= n/2 ; i++ , j++) {
                b.add(a.get(i));
                if (j<n)
                    b.add(a.get(j));
            }
            int sum = 0;
            for (int i = 1; i < n-1; i++) {
                if(b.get(i) > b.get(i-1) && b.get(i)> b.get(i+1)){
                    sum++;
                }
            }
            if (sum >= m) {
                for(Long x : b){
                    System.out.print(x + " ");
                }
                System.out.println();
            }else {
                System.out.println(-1);
            }

        }
    }
}
