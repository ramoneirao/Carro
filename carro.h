# ifndef CARRO_H
# define  CARRO_H

#include <string>
using std::string;

class Carro{
    public:
    // métodos do carro:
    Carro(int = 2002, float = 155000, float = 60, double = 200.0, double = 0.01);
    Carro(const Carro&);
    ~Carro();

    static int numCarros;

    int getAno() const;
    float getKm() const;
    float getGas() const;
    string getNameCar();
    double getMAXSPEED() const;
    double getMINSPEED() const;
    void print() const;

    void setAno(int);
    void setGas(float);
    void setKm(float);
    void setNameCar(string);
    void carroAndando();
//    void cadastrarACarro( const string & );


    private:
    // atributos do carro:

    int ano;
    float gas, km;
    string nameCar;
    bool check = false;

    const double MAXSPEED; 
    const double MINSPEED;
    const int MAXSIZENAME;

//    static int numCarros;
    static const int NUMDECORES = 4;
    static const string CORES[NUMDECORES];

};

# endif