#ifndef INCLUDED_AIRPLANE_H
#define INCLUDED_AIRPLANE_H

#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Airplane
{
private:
   int passengers;
   string name;

   Airplane(const Airplane& rhs);
   Airplane& operator= (const Airplane& rhs);

public:
   Airplane();
   ~Airplane();

   int getTotalPassengers();
   void generateRandomName();
   string getName();
};

#endif // !INCLUDED_AIRPLANE_H
