from urllib.request import urlopen

def fetch_words():
    with urlopen('http://192.168.29.111/m.txt') as story:
        story_words=[]
        for line in story:
            line_words = line.decode('utf-8').split()
            for word in line_words:
               # print(word)
                story_words.append(word)
    for word in story_words:
        print(word)



if __name__ == "__main__":
    fetch_words()
