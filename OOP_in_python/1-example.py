class Robot:
   
    def __init__(self, name=None):
        self.name = name

    def say_hi(self):

        if self.name:
            print("Hi, I am " + self.name)
        else:
            print("Hi, I am a robot without a name")

    def set_name(self, name):
        self.name = name
    def get_name(self):
        return self.name
    
    def set_build_year(self, by):
         self.build_year = by
    def get_build_year(self):
        return self.build_year
        
x = Robot("Henry", 2992)
x.say_hi()

y = Robot()
y.set_name("Mavin")
y.say_hi()