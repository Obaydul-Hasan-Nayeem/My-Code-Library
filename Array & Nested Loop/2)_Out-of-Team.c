/*
Problem Statement

Alien Cricket Board has decided to throw out a player out of the team if his performance is very bad against a match against Bangladesh team.
If any player is not able to make at least K runs he will be out of the team.
You will be given N, the number of players and the runs that the players were able to take and K,
the minimum run that every player needs to take to be in the team. Can you tell the number of players that will be out of the team?

Input Format
First line will contain N and K
Second line will contain N values, the runs that the players have taken

Constraints
1 <= N <= 100
0 <= K <= 100
0 <= Run <= 100

Output Format
Output the number of players that will be thown out of the Alien team

Sample Input 0
5 10
100 25 0 9 10

Sample Output 0
2

Explanation 0
As 2 player could not score at lease 10 runs, the answer is 2.
*/

// Solution in C:
#include<stdio.h>
int main() {

  int n, k;
  scanf("%d%d", &n, &k);

  int ans = 0;

  while(n--) {
    int r;
    scanf("%d", &r);

    if (r < k) {
        ans++;
    }
  }

  printf("%d", ans);
   return 0;
}
