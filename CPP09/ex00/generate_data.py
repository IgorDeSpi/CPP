import random

num_entries = 20

with open('input.txt', 'a') as file:
    if file.tell() == 0:
        file.write("date | value\n")

    for _ in range(num_entries):
        random_year = random.randint(2000, 2100)
        random_month = random.randint(1, 30)
        random_day = random.randint(1, 50)

        date_str = "{:04d}-{:02d}-{:02d}".format(random_year, random_month, random_day)

        random_value = round(random.uniform(-1000.0, 1000.0), 2)
        entry = "{} | {}\n".format(date_str, random_value)
        file.write(entry)
