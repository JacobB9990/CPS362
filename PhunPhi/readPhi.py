import pandas as pd
import matplotlib.pyplot as plt
import sys

def main(n):
    try:
        filename = f"calculating_{n}th_phi.csv"
        data = pd.read_csv(filename)

        print("Data from CSV:")
        print(data)

        plt.figure(figsize=(10, 6))

        # plt.plot(data["n"], data["Straightforward"], label="Straightforward (φ^n)")
        # plt.plot(
        #    data["n"], data["Iterative"], label="Iterative (φ^(n-1) + φ^(n-2))",
        # )
        plt.plot(
            data["n"], 
            data["Delta_double"], 
            label="Delta (double))",
        )
        plt.plot(
            data["n"],
            data["Delta_float"],
            label="Delta (float)",
        )

        plt.xlabel("n")
        plt.ylabel("Value")
        plt.title(f'Comparison of Straightforward and Iterative Calculations for φ^n (n up to {data["n"].max()})')
        plt.legend()
        plt.grid(True)

        plt.show()
    except KeyboardInterrupt:
        print("Exiting\n")
        sys.exit(0)

if __name__ == "__main__":
    nth = sys.argv[1]
    print(nth)
    main(nth)
