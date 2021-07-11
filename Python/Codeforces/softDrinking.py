from typing import Collection


n, bottles, q, lime, slices, salt, bq, sq = map(int, input().split())

toasts_liq = int((bottles*q)/(bq)) 
toasts_lem = lime*slices 
toasts_salt=int(salt/sq)

net_toasts = min(1000, toasts_liq, toasts_lem,toasts_salt)

print(int(net_toasts/n))