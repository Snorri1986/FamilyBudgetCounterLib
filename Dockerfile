# Use an official GCC image from Docker Hub
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container
COPY . .

# Compile the C++ program
RUN g++ -o FamilyBudgetCountLib main.cpp

# Specify the command to run the executable
CMD ["./FamilyBudgetCountLib"]