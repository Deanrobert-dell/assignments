import datetime

curenttime = datetime.datetime.now()

print(curenttime.hour)
def main():
    if curenttime.hour<12:
        print("Wake up sleepy head")
    elif curenttime.hour<18:
        print("good afternoon")
    else:
        print("Go to sleep")
main()

