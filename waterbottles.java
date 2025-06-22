public class waterbottles {
    public int numWaterBottles(int numBottles, int numExchange) {
        int maxBottles = numBottles;
        int emptyBottles = numBottles;

        while (emptyBottles >= numExchange) {
            int newBottles = emptyBottles / numExchange;
            maxBottles += newBottles;
            emptyBottles = newBottles + (emptyBottles % numExchange);
        }

        return maxBottles;
    }
}
/*try for cases like (12,4) 

Perfect division	(15, 3)	No leftovers
Just below limit	(3, 4)	Not enough to exchange
With leftover	(12, 4)	Leftovers matter for future steps
One exchange	(4, 4)	Only one swap, test lower bound*/