import java.util.*;

public class Test {
    public static void main(String args[]) {
        int N, M, K;
        int ans = 0;
        Vector<Integer> vc = new Vector<Integer>(); // Integer를 명시해야 합니다.
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();
        K = sc.nextInt();

        for (int i = 0; i < N; i++) {
            int x = sc.nextInt();
            vc.add(x);
        }
        Collections.sort(vc, Collections.reverseOrder()); // 내림차순으로 정렬합니다.

        while (M != 0) {
            for (int i = 0; i < K; i++) {
                ans += vc.get(0); // 가장 큰 값을 사용해야 합니다.
                M--;
            }
            ans += vc.get(1); // 두 번째로 큰 값을 추가합니다.
            M--;
        }
        System.out.println(ans); // 결과를 출력합니다.
    }
}


