from matplotlib import pyplot as plt

x_values = [1,2,3,4]
y_values = [5,6,7,2]

plt.plot(x_values,y_values)

other_x_values = [1,2,3,4]
other_y_values = [5,4,2,1]
plt.scatter(other_x_values, other_y_values)
plt.title("Sample graph")

plt.xlabel("x_values")
plt.ylabel("y_values")

plt.show()
