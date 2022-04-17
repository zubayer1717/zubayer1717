#include<stdio.h>
int main()
{


double first_term, last_data,i,incremental_value,sum=0;

printf("Enter the first term : ");
		scanf("%lf", &first_term);
		printf("Enter the last term : ");
		scanf("%lf", &last_data);
		printf("Enter increment data : ");
		scanf("%lf", &incremental_value);

		for (i = first_term; i <= last_data; i = i + incremental_value)
		{
			sum = sum + i;
		}
		printf("The summation is %lf\n", sum);

		return 0;
}
