#include <stdio.h>

float interest_one_month(float balance);
float leap_year_interest(float balance, int array[]);
float reg_year_interest(float balance, int array[]);
float interest_one_month_regyr(float balance);
float interest_one_month_leapyr(float balance);

int main()
{

	int jan_days;
	jan_days = 31;
	int feb_days;
	feb_days = 28;
	int mar_days;
	mar_days = 31;
	int apr_days;
	apr_days = 30;
	int may_days;
	may_days = 31;
	int jun_days;
	jun_days = 30;
	int jul_days;
	jul_days = 31;
	int aug_days;
	aug_days = 31;
	int sep_days;
	sep_days = 30;
	int oct_days;
	oct_days = 31;
	int nov_days;
	nov_days = 30;
	int dec_days;
	dec_days = 31;

    int leap_year[12] = {jan_days, (feb_days + 1), mar_days,
		apr_days, may_days, jun_days, jul_days,
		aug_days, sep_days, oct_days, nov_days,
		dec_days};

	int reg_year[12] = {jan_days, (feb_days + 1), mar_days,
		apr_days, may_days, jun_days, jul_days,
		aug_days, sep_days, oct_days, nov_days,
		dec_days};

	float balance;
	balance = 0;

	balance = leap_year_interest(balance, leap_year);
	for (int reg_yr_period_1=0;reg_yr_period_1<3;reg_yr_period_1++)
	{
		balance = reg_year_interest(balance, reg_year);
	}
	balance = leap_year_interest(balance, leap_year);
	for(int reg_yr_period_2=0;reg_yr_period_2<3;reg_yr_period_2++)
	{
		balance = reg_year_interest(balance, reg_year);
	}
	balance = leap_year_interest(balance, leap_year);
	for(int reg_yr_period_3=0;reg_yr_period_3<2;reg_yr_period_3++)
	{
		balance = reg_year_interest(balance, reg_year);
	}

	printf("The final balance is $%f after 10 years\n", balance);

	int bal_w_o_interest;
	bal_w_o_interest = ((366 * 3) + (365 * 7)) * 5;

	printf("The balance without interest, after 10 years would be: $%d\n",
			bal_w_o_interest);

	float bal_diff;
	bal_diff = balance - (float)bal_w_o_interest;
	printf("\nYou earn $%f in interest over a 10 year period.\n", bal_diff);
}

float interest_one_month_leapyr(float balance)
{
	float end_bal;
	end_bal = (balance) * (1+(0.0001/366));
	return(end_bal);
}

float leap_year_interest(float balance, int array[])
{
    for (int month=0;month<12;month++)
    {
            for (int day=0;day<array[month];day++)
            {
                balance += 5;
                balance = interest_one_month_leapyr(balance);
            }
    }
    return(balance);
}

float interest_one_month_regyr(float balance)
{
	float end_bal;
	end_bal = (balance) * (1+(0.0001/365));
	return(end_bal);
}

float reg_year_interest(float balance, int array[])
{
    for (int month=0;month<12;month++)
    {
            for (int day=0;day<array[month];day++)
            {
                balance += 5;
                balance = interest_one_month_regyr(balance);
            }
    }
    return(balance);
}