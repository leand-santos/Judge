import java.awt.Point;
import java.util.*;
 
public class CavaloPeaoSohBacktracking {
  Point posCavalo, posPeao;
  boolean emUso[][] = new boolean[8][8];
  int maxK = 64;
  Point solucao[] = new Point[8*8];
 
  /** verifica se o caminho é valido (dentro do tabuleiro e nao participando do caminho atual) */
  boolean ehValida(Point S[], int k) {
    if (k >= maxK)
      return false;
    Point pos = S[k-1];
    return (pos.x >= 0 && pos.x < 8 && pos.y >= 0 && pos.y < 8) && (!emUso[pos.x][pos.y]);
  }
 
  boolean ehSolucao(Point S[], int k) {
    return S[k-1].equals(posPeao);
  }
 
  void processa(Point S[], int k) {
    maxK = k;
    System.out.print(xy_xadrez(S[0]));
    for (int i = 1; i < k; i++) {
      solucao[i] = S[i];
      System.out.print(","+xy_xadrez(S[i]));
    }
    System.out.println();
  }
 
  /** rotina que encontra recursivamente os caminhos possíveis */
  void calculaCaminho(Point S[], int k) {
    if (! ehValida(S, k))
      return;
    if (ehSolucao(S, k)) {
      processa(S, k);
      return;
    }
    emUso[S[k-1].x][S[k-1].y] = true;
    S[k] = new Point();
    S[k].x = S[k-1].x + 1; S[k].y = S[k-1].y + 2;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x + 1; S[k].y = S[k-1].y - 2;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x - 1; S[k].y = S[k-1].y + 2;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x - 1; S[k].y = S[k-1].y - 2;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x + 2; S[k].y = S[k-1].y + 1;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x + 2; S[k].y = S[k-1].y - 1;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x - 2; S[k].y = S[k-1].y + 1;
    calculaCaminho(S, k+1);
    S[k].x = S[k-1].x - 2; S[k].y = S[k-1].y - 1;
    calculaCaminho(S, k+1);
    emUso[S[k-1].x][S[k-1].y] = false;
    return;
  }
 
  /** converte da coordenada do tabuleiro para x,y */
  Point xadrex_xy(String pos) {
    return new Point(pos.charAt(0) - 'A', pos.charAt(1) - '1');
  }
 
  /** converte da coordenada (x,y) para coordenada do tabuleiro */
  String xy_xadrez(Point p) {
    return "" + (char)('A' + p.x) + (char)('1' + p.y);
  }
 
  CavaloPeaoSohBacktracking() {
    Scanner in = new Scanner(System.in);
    String cavalo = in.nextLine();
    String peao = in.nextLine();
    posCavalo = xadrex_xy(cavalo);
    posPeao = xadrex_xy(peao);
    Point S[] = new Point[8*8];
    S[0] = posCavalo;
    calculaCaminho(S, 1);
  }
 
  public static void main(String[] args) {
    new CavaloPeaoSohBacktracking();
  }
 
}