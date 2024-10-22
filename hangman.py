import random

def hangman():
    words = ['snake', 'blue', 'challenge', 'ocean']
    word = random.choice(words)
    guessed = ''
    tries = 6

    while tries > 0:
        display = ''.join(letter if letter in guessed else '_' for letter in word)
        print(f"\nCurrent word: {display}")
        print(f"You have {tries} tries left.")

        guess = input("Guess a letter: ").lower()
        
        if guess in guessed:
            print("You've already guessed that letter.")
            continue

        guessed += guess

        if guess not in word:
            tries -= 1

        if all(letter in guessed for letter in word):
            print(f"Congratulations! You've guessed the word: {word}")
            break
    else:
        print(f"Sorry, the word was: {word}")
hangman()