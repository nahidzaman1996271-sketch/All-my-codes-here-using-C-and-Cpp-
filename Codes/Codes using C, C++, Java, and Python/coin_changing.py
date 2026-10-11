def coin_change_table(coins, W):
    n = len(coins)
    # row 0 = "no coins" (hidden base row): only amount 0 is possible
    dp = [[0] * (W + 1) for _ in range(n + 1)]
    for i in range(n + 1):
        dp[i][0] = 1

    for i in range(1, n + 1):
        coin = coins[i - 1]
        for w in range(1, W + 1):
            exclude = dp[i - 1][w]                         # 1) exclude the coin
            include = dp[i][w - coin] if coin <= w else 0  # 2) include the coin
            dp[i][w] = exclude + include                   # 3) add both
    return dp


def print_table(coins, W, dp):
    print("\ncoins\\W " + "".join(f"{w:>4}" for w in range(W + 1)))
    print("-" * (8 + 4 * (W + 1)))
    for i, coin in enumerate(coins, start=1):
        print(f"{coin:>6} |" + "".join(f"{dp[i][w]:>4}" for w in range(W + 1)))


if __name__ == "__main__":
    coins = list(map(int, input("Enter coins (space separated): ").split()))
    W = int(input("Enter amount W: "))

    dp = coin_change_table(coins, W)
    print_table(coins, W, dp)
    print(f"\nNumber of ways to make {W} = {dp[len(coins)][W]}")