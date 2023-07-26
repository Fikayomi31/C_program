class Dog:

    def __init__(self, name="", height=0, weight=0):
        self.name = name
        self.height = height
        self.weight = weight

    def run(self):
        print("{} the dog run".format(self.name))

    def eat(self):
        print("{} the dog eats")