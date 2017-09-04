import java.util.*;

class Init {
        public static char[] letter = { 'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
}

class Name {
    ArrayList<String> names;
    int[] count;
    int max = 0;
    Name(int N) {
        names = new ArrayList(N);
        count = new int[N];
    }
    void input(String str) {
        names.add(str);
    }
    void total() {
        for(int i=0;i<names.size();i++) {
            int temp = 0;
            for(char ch:Init.letter) {
                if(names.get(i).indexOf(ch) >= 0) {
                    temp += 1;
                }
            }
            count[i] = temp;
            if(count[i]>count[max]) {
                max = i;
            } else if(count[i]==count[max]) {
                if(names.get(i).compareTo(names.get(max)) < 0) {
                    max = i;
                }
            }
        }

    }

    void result(int C) {
        System.out.println("Case #"+ C +": "+ names.get(max));
    }
 }

public class A {

   public static void main(String[] args) {
      Scanner read = new Scanner(System.in);
       int T = read.nextInt();

       String str;
//      ArrayList<String> list = new ArrayList(T);

      Name[] name = new Name[T];

      for(int i=0;i<T;i++) {
          int N = read.nextInt();
          name[i] = new Name(N);
          read.nextLine();
          for(int j=0;j<N;j++) {
              str = read.nextLine();
              name[i].input(str);
          }
          name[i].total();
          name[i].result(i+1);
      }





   }
}
