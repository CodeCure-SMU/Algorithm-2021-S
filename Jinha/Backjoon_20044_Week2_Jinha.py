'''
import sys; In = sys.stdin.readline

N = int(In())
skill = sorted(map(int, input().split()))
score = []
for i in range(N):
    skill[i] + skill[-i-1]
print(min(score))
'''

skill = map(int, input().split())
print(skill)