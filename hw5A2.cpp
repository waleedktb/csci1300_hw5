#include <iostream>
using namespace std;

int daysToFund(int startBal, int dailyDep)
{
    int vaultGoal = 42500;
    int balance = startBal;
    int days = 0;

    while (balance < vaultGoal)
    {
        balance += dailyDep;
        days++;

        cout << "Day " << days << ": deposited " << dailyDep
             << ", balance now " << balance << endl;
    }

    return days;
}

int main()
{
    int startBal;
    int dailyDep;

    cout << "Enter the starting Vault balance: ";
    cin >> startBal;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDep;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(startBal, dailyDep);

    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}