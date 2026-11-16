class Idol{
    String ho_ten;
    int tuoi;
    double chieu_cao, can_nang;

    public void gioi_thieu_ten(){
        System.out.println("xin chao ! toi la " + ho_ten);
    }

    public String tinh_trang_lao_dong(int min, int max){
        String ket_qua;
        if(tuoi < min){
            ket_qua = "chua du tuoi lao dong";
        }
        else if(tuoi > max){
            ket_qua = "het date";
        }
        else{
            ket_qua = "trong do tuoi lao dong";
        }
        return ket_qua;
    }
}