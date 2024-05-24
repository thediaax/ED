public class P1{
    static int somaVet(int i, int [] v){
        if(i<v.length)
            return v[i] + somaVet(i+1, v);
        return 0;
    }

    public static void main(String[] args) {
        int [] v = {4,7,8};
        System.out.printf("%d\n", somaVet(0, v));
    }
}