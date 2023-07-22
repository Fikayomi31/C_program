class Robot:
    """Represent a robot, with a name"""

    """A class variable, counting the number of robots"""
    population = 0

    def __init__(self, name):
        """Initializes the data"""
        self.name = name
        print("(Initializing {})".format(self.name))

        # When the person is created, the robot
        # adds to the population
        Robot.population += 1

    def die(self):
            """robot dying"""
            print("{} is being destroyed".format(self.name))

            Robot.population -= 1

            if Robot.population == 0:
                print("{} was the last one".format(self.name))
            else:
                print("There are still {:d} robots working.".format(Robot.population))

        
    def say_hi(self):
            """greeting by the robot"""
            print("Greeting, my masters call me {}".format(self.name))

    @classmethod
    def how_many(cls):
            """Prints the current population."""
            print("We have {:d} robots.".format(cls.population))


    def do_work(self):
          """Robot is doing some work"""
          print("{} is some doing work.".format(self.name))
    @classmethod
    def robot_many(cls):
          """Howmany robot doing work"""
          print("We have {:d} robots doing some work".format(cls.population))
driod1 = Robot("R2-D2")
driod1.say_hi()
Robot.how_many()

driod2 = Robot("C-3P0")
driod2.say_hi()
Robot.how_many()

print("\nRobot can do somne work here.\n")

driod1.do_work()
driod2.do_work()

Robot.robot_many()
print("Robot have finished their work. So let's destroyed them.")
driod1.die()
driod2.die()

Robot.how_many()