import java.util.Date;
import java.util.Scanner;

public class TesteOrdenacao {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("escolha o tamanho do vetor, 0 encerra: ");
        int cap = scanner.nextInt();
        VetorDinamico v;
        long ini, fim;
        while (cap > 0) {
            v = new VetorDinamico(cap);
            // v.geraElementos();
            // //System.out.println("vetor: " + v);
            // ini = new Date().getTime();
            // v.bubbleSort();
            // fim = new Date().getTime();
            // System.out.println("bubble demorou " + (fim-ini) + " ms");
            //System.out.println("vetor ordenado pelo bubble: " + v);
            //System.out.print("escolha o tamanho do vetor, 0 encerra: ");

            v.resetVetor();
            v.geraElementos();
            //System.out.println("segundo vetor: " + v);
            ini = new Date().getTime();
            v.quicksort(0, cap-1);
            fim = new Date().getTime();
            System.out.println("1quicksort demorou: " + (fim-ini) + "ms");
            //System.out.println("vetor ordenado pelo quick: " + v);
            

            // ini = new Date().getTime();
            // v.quicksort(0, cap-1);
            // fim = new Date().getTime();
            // System.out.println("2quicksort demorou: " + (fim-ini) + "ms");


            System.out.println("escolha o tamanho do vetor, 0 encerra: ");
            cap = scanner.nextInt();
        }
        scanner.close();
    }
}
    