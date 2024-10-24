# Use an official GCC image from Docker Hub
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container
COPY . .

# RUN apt-get update && apt-get install -y git cmake libboost-all-dev
# Crow library
RUN git clone https://github.com/CrowCpp/crow.git /usr/src/crow
RUN apt-get update && apt-get install -y \
    git \
    cmake \
    libboost-system-dev \
    libboost-thread-dev \
    libboost-filesystem-dev \
    libboost-dev

# open port for API
EXPOSE 8080
    

# Compile the C++ program
#RUN g++ -I /usr/src/crow/include -o FamilyBudgetCountLib main.cpp
RUN g++ -I/usr/src/crow/include -I/usr/include/boost -o FamilyBudgetCountLib main.cpp functionslib.cpp -lboost_system -lboost_thread -lboost_filesystem -DCROW_USE_BOOST

# Specify the command to run the executable
CMD ["./FamilyBudgetCountLib"]