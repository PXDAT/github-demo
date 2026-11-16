class JavDictionary{
    public static void main(String[] args){
        Idol idol = new Idol();
        idol.ho_ten = "eimi fukada";
        idol.tuoi = 16;
        idol.can_nang = 1.60;
        idol.can_nang = 48;

        idol.gioi_thieu_ten();
        for(int i = 0; i < 15; ++i){
            idol.tuoi++;
            System.out.println("tuoi = " + idol.tinh_trang_lao_dong(19, 33));
        }
        
    }
}