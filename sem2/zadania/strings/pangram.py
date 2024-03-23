import string
alphabet = string.ascii_lowercase

def is_pangram(sentence):
    sentence = sentence.casefold().split(" ")
    sentence = "".join(sentence)
    letters = ""
    for letter in sentence:
        if alphabet.find(letter) >= 0:
            if letters.find(letter) < 0:
                letters += letter

    letters = [char for char in letters]
    letters = ''.join(sorted(letters))

    return letters == alphabet
