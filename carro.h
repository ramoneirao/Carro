# ifndef CARRO_H
# define  CARRO_H

class carro{
    public:
    carro(int = 2002, float = 155000, float = 60, double = 200.0, double = 0.01);
    carro(const carro&);
    ~carro();

    int getAno() const;
    float getKm() const;
    float getGas() const;
    double getMAXSPEED() const;
    double getMINSPEED() const;
    void print() const;

    void setAno(int);
    void setGas(float);
    void setKm(float);
    void carroAndando();


    private:
    int ano;
    float gas, km;
    const double MAXSPEED, MINSPEED;

};

# endif