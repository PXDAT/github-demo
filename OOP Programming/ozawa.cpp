#include<iostream>
#include<string>

class Phu_nu{
    public:
        Phu_nu(const std::string &ht, int t ,bool z = true) 
        : ho_ten(ht), tuoi(t), con_zin(z){
            ho_ten = ht;
            con_zin = z;
        }
        void trang_diem(){

        }
        virtual std::string choi_nhac_cu(std::string nhac_cu){

            return "AAAAAAAAAA";
        }

        ~Phu_nu(){
            std::cout << "Chia tay " << ho_ten << std::endl;
        }

        void va_zin(){
            if(tuoi < 25){
                con_zin = true;
            }
            
        }
        void show_hang(){
            std::cout << ho_ten << " " << (con_zin ? "con zin" : "mat zin") << std::endl;
        }
    protected:
        bool con_zin;
        std::string ho_ten;
        int tuoi;

};

class Gai_ngoan : public Phu_nu{
    public:
        Gai_ngoan(const std::string &ht, int t, bool z = true) 
            : Phu_nu(ht, t, z){}
        
        void noi_tro(){
            std::cout << ho_ten << " Dang lam noi tro" << std::endl;
        }
        std::string choi_nhac_cu(std::string nhac_cu){
            
            return "OOOOOOOO";
        }
};
class Gai_hu : public Phu_nu{
    public:
        Gai_hu(const std::string &ht, int t, bool z = true) 
            : Phu_nu(ht, t, z){}

        void di_bar(){

        }
        std::string choi_nhac_cu(std::string nhac_cu){
            
            return "UUUUUUUUUH";
        }
};


class Dan_ong{

};
int main(){
    Phu_nu *maria_ozawa = new Gai_hu("Maria Ozawa", 22, false);
    std::cout << maria_ozawa->choi_nhac_cu("ken") << std::endl;

    return 0;   
}