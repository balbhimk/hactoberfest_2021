from datetime import datetime , date

#Class object 
dates = datetime.now()



#Taking input from user for his/her birthday
# usr_date = int(input("Enter your Date of Birthday: \n"))
# usr_month = int(input("Enter your Month of Birthday: \n"))
# usr_year = int(input("Enter your Year of Birthday: \n"))

usr_date = 20
usr_month = 3
usr_year = 2005

#Dleclaring variables for current date
usr_birthdate = date(usr_year,usr_month,usr_date)
todays_date = date(dates.year,dates.month,dates.day)
date_difference = todays_date - usr_birthdate


#Storing calculated age
calculated_year = (date_difference.days // 365)
calculated_month = (date_difference.days - calculated_year *365) // 30
calculated_date = (date_difference.days - calculated_year * 365 - calculated_month *30)

print(calculated_year)
print(calculated_month)
print(calculated_date)
#Conditions for using s
if calculated_year == 1 and calculated_month != 1 and calculated_date != 1:
    print(f"Your Age is: {calculated_year} year {calculated_month} months {calculated_date} days")

elif calculated_month == 1 and calculated_year != 1 and calculated_date != 1:
    print(f"Your Age is: {calculated_year} years {calculated_month} month {calculated_date} days")
    
elif calculated_date == 1 and calculated_month != 1 and calculated_year != 1:
    print(f"Your Age is: {calculated_year} years {calculated_month} months {calculated_date} day")

elif calculated_month == 1 and calculated_year == 1 and calculated_date != 1:
    print(f"Your Age is: {calculated_year} year {calculated_month} month {calculated_date} days")

elif calculated_month == 1 and calculated_date == 1 and calculated_year != 1:
    print(f"Your Age is: {calculated_year} years {calculated_month} month {calculated_date} day")

elif  calculated_year == 1 and calculated_date == 1 and calculated_month != 1:
    print(f"Your Age is: {calculated_year} year {calculated_month} months {calculated_date} day")

elif calculated_month == 1 and calculated_year == 1 and calculated_date == 1:
    print(f"Your Age is: {calculated_year} year {calculated_month} month {calculated_date} day")

else :
    print(f"Your Age is: {calculated_year} years {calculated_month} months {calculated_date} days")
