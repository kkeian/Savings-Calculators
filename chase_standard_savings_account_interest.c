/* All product names, trademarks and registered trademarks are property of
 * their respective owners. All company, product and service names used in this
 * program are for identification purposes only. Use of these names,
 * trademarks, and bands does not imply endorsement. 
 *
 * All trademarks cited are the property of their respective owners.
 *
 * JPMorgan Chase is a registered trademark of:
 * JPMORGAN CHASE & CO. CORPORATION DELAWARE 270 PARK AVENUE 
 * NEW YORK NEW YORK 10017
 *
 * Please see 
 * http://tmsearch.uspto.gov/bin/showfield?f=doc&state=4808:zap1la.6.21 
 * for more information. */

#include <stdio.h>

float interest_one_month(float balance);
float leap_year_interest(float balance, float array[]);
float reg_year_interest(float balance, float array[]);

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

	int leap_year;
	leap_year = jan_days + (feb_days + 1) + mar_days +
		apr_days + may_days + jun_days + jul_days +
		aug_days + sep_days + oct_days + nov_days +
		dec_days;

	int reg_year;
	reg_year = jan_days + feb_days + mar_days +
		apr_days + may_days + jun_days + jul_days +
		aug_days + sep_days + oct_days + nov_days +
		dec_days;

	float jan_deposit;
	jan_deposit = jan_days * 5;
	float feb_leap_deposit;
	feb_leap_deposit = (feb_days + 1) * 5;
	float feb_reg_deposit;
	feb_reg_deposit = feb_days * 5;
	float mar_deposit;
	mar_deposit = mar_days * 5;
	float apr_deposit;
	apr_deposit = apr_days * 5;
	float may_deposit;
	may_deposit = may_days * 5;
	float jun_deposit;
	jun_deposit = jun_days * 5;
	float jul_deposit;
	jul_deposit = jul_days * 5;
	float aug_deposit;
	aug_deposit = aug_days * 5;
	float sep_deposit;
	sep_deposit = sep_days * 5;
	float oct_deposit;
	oct_deposit = oct_days * 5;
	float nov_deposit;
	nov_deposit = nov_days * 5;
	float dec_deposit;
	dec_deposit = dec_days * 5;

	float leap_deposit[12] = {jan_deposit, feb_leap_deposit, mar_deposit,
		apr_deposit, may_deposit, jun_deposit, jul_deposit,
		aug_deposit, sep_deposit, oct_deposit, nov_deposit,
		dec_deposit};
	float reg_deposit[12] = {jan_deposit, feb_reg_deposit, mar_deposit,
		apr_deposit, may_deposit, jun_deposit, jul_deposit,
		aug_deposit, sep_deposit, oct_deposit, nov_deposit,
		dec_deposit};

	float balance;
	balance = 0;

	balance = leap_year_interest(balance, leap_deposit);
	for (int reg_yr_period_1=0;reg_yr_period_1<3;reg_yr_period_1++)
	{
		balance = reg_year_interest(balance, reg_deposit);
	}
	balance = leap_year_interest(balance, leap_deposit);
	for(int reg_yr_period_2=0;reg_yr_period_2<3;reg_yr_period_2++)
	{
		balance = reg_year_interest(balance, reg_deposit);
	}
	balance = leap_year_interest(balance, leap_deposit);
	for(int reg_yr_period_3=0;reg_yr_period_3<2;reg_yr_period_3++)
	{
		balance = reg_year_interest(balance, reg_deposit);
	}

	printf("The final balance is $%f after 10 years\n", balance);

	int bal_w_o_interest;
	bal_w_o_interest = ((leap_year * 3) + (reg_year * 7)) * 5;

	printf("The balance without interest, after 10 years would be: $%d\n",
			bal_w_o_interest);

	float bal_diff;
	bal_diff = balance - (float)bal_w_o_interest;
	printf("\nYou earn $%f in interest over a 10 year period.\n", bal_diff);
}

float interest_one_month(float balance)
{
	float end_bal;
	end_bal = (balance) * (1+(0.0001/12));
	return(end_bal);
}

float leap_year_interest(float balance, float array[])
{
	for (int month=0;month<12;month++)
	{
		balance = balance + array[month];
		balance = interest_one_month(balance);
	}
	return(balance);
}

float reg_year_interest(float balance, float array[])
{
	for (int month=0;month<12;month++)
	{
		balance = balance + array[month];
		balance = interest_one_month(balance);
	}
	return(balance);
}
