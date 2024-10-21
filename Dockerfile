# Use an official GCC image from Docker Hub
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container
COPY . .

# Crow library
RUN apt-get update && apt-get install -y git cmake libboost-all-dev
RUN git clone https://github.com/CrowCpp/crow.git /usr/src/crow

# Compile the C++ program
RUN g++ -I /usr/src/crow/include -o FamilyBudgetCountLib main.cpp

# Specify the command to run the executable
CMD ["./FamilyBudgetCountLib"]