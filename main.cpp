
#include <algorithm>
#include <iostream>
#include <vector>
#include "array1d.h"
#include "sll.h"
#include "dll.h"
#include "faq.h"
#include "stackArray.h"
#include "Queue.h"
#include "queueLinkedList.h"
#include "datapelayan.h"
#include "datapelanggan.h"
#include "ekspedisi.h"
#include "tree.h"
#include "avltree.h"
#include "jobdesk/115.h"
#include "jobdesk/086115.h"
#include "jobdesk/086.h"

int main() 
{ 
  root=NULL;
	int ch,tmp;
  plg pel;
  Driver dr;
  qna qna;
  olshop ol;
  
  vector<Baju> keranjang;
  Ktp aman;
  input _input;
  proses _proses;
  char pilihMenuUtama;
  fstream data;
  bool isMenuUtama = true;
  bool isMenuAdmin = true;
  bool isMenuUser = true;
  int pil;

  //perulangan untuk menampilkan menu
  while(isMenuUtama == true)
  { 
    //menu awal program
    cout<<"=============================="<<endl;
    cout<<"|  1. Input KTP              |"<<endl;
    cout<<"|  2. Login                  |"<<endl;
    cout<<"|  3. Daftar                 |"<<endl;
    cout<<"|  4. Exit                   |"<<endl;
    cout<<"=============================="<<endl;
    cout<<"Pilih : ";
    cin>>pilihMenuUtama;
    switch(pilihMenuUtama) 
    {

      //memanggil input ktp
      case '1':
      {
        _input.inputKTP();
        break;        
      }

      //memanggil login
      case '2':
      {
        string nik, password, password2;
        char pilihTipeUser;
        bool isLogin = false;
        cout<<"=========================="<<endl;
        cout<<"|        1. Admin        |"<<endl;
        cout<<"|        2. User         |"<<endl;
        cout<<"=========================="<<endl;
        cout<<"Pilih : ";
        cin>>pilihTipeUser;

        //percabangan pilihan login
        switch(pilihTipeUser)
        {

          //login sebagai admin
          case '1':
          {
            char pilihMenuAdmin;
  
            cout<<"NIK      : ";
            cin>>nik;
            cout<<"Password : ";
            cin>>password;
            data.open("admin/" + nik + ".txt", ios::in);
            getline(data, password2);
            
            //pernyataaan benar atau salah
            if(data.is_open() && password == password2)
            {
              isLogin = true;
            }
            data.close();
  
            if(isLogin == true)
            {
              isMenuAdmin = true;
              
              //perulangan menampilkan menu admin
              while(isMenuAdmin == true)
              {
                menu:
                cout <<"============================"<<endl;
                cout<<"|     1. Lihat KTP           |"<<endl;
                cout<<"|     2. Tambah Baju         |"<<endl;
                cout<<"|     3. jadwal shift        |"<<endl;
                cout<<"|     4. data pelayan        |"<<endl;
                cout<<"|     5. Daftar CEO          |"<<endl;
                cout<<"|     6. Riwayat pelanggan   |"<<endl;
                cout<<"|     7. Data pelanggan      |"<<endl;
                cout<<"|     8. Stok baju di gudang |"<<endl;
                cout<<"|     9. Logout              |"<<endl;
                cout <<"============================"<<endl;
                cout<<"Pilih : ";
                std::cin>>pilihMenuAdmin;
                
                //percabangan pilihan menu admin
                switch(pilihMenuAdmin)
                {
                  
                  //menampilkan melihat KTP yang telah diinput
                  case '1':
                  {
                    string buffer[10][20];
                    data.open("KTP/DaftarKTP.txt");
                    int a = 0;
                    while(getline(data, buffer[a][0], '#') && 
                          getline(data, buffer[a][1], '#') && 
                          getline(data, buffer[a][2], '#') &&     
                          getline(data, buffer[a][3], '#') && 
                          getline(data, buffer[a][4], '#') && 
                          getline(data, buffer[a][5], '#') && 
                          getline(data, buffer[a][6], '#') && 
                          getline(data, buffer[a][7], '#') && 
                          getline(data, buffer[a][8], '#') && 
                          getline(data, buffer[a][9], '#') && 
                          getline(data, buffer[a][10], '#') && 
                          getline(data, buffer[a][11], '#') && 
                          getline(data, buffer[a][12], '#') && 
                          getline(data, buffer[a][13], '#') && 
                          getline(data, buffer[a][14], '#') && 
                          getline(data, buffer[a][15], '#') && 
                          getline(data, buffer[a][16], '#') && 
                          getline(data, buffer[a][17], '#') && 
                          getline(data, buffer[a][18], '#') && 
                          getline(data, buffer[a][19], '#'))
                    {
                      a++;
                    }
                  
                    for(int i = 0; i < a; i++)
                    {
                      cout<<"Provinsi          : "<<buffer[i][0]<<endl;
                      cout<<"Kabupaten         : "<<buffer[i][1]<<endl;
                      cout<<"NIK               : "<<buffer[i][2]<<endl;
                      cout<<"Nama              : "<<buffer[i][3]<<endl;
                      cout<<"Tempat/Tgl Lahir  : "<<buffer[i][4]<<", "<<buffer[i][5]<<"-"<<buffer[i][6]<<"-"<<buffer[i][7]<<endl;
                      cout<<"Jenis Kelamin     : "<<buffer[i][8]<<"\t\tGol. Darah : "<<buffer[i][9]<<endl;
                      cout<<"Alamat            : "<<buffer[i][10]<<endl;
                      cout<<"RT/RW             : "<<buffer[i][11]<<"/"<<buffer[i][12]<<endl;
                      cout<<"Kel/Desa          : "<<buffer[i][13]<<endl;
                      cout<<"Kecamatan         : "<<buffer[i][14]<<endl;
                      cout<<"Agama             : "<<buffer[i][15]<<endl;
                      cout<<"Status Perkawinan : "<<buffer[i][16]<<endl;
                      cout<<"Pekerjaan         : "<<buffer[i][17]<<endl;
                      cout<<"Kewarganegaraan   : "<<buffer[i][18]<<endl;
                      cout<<"Berlaku Hingga    : "<<buffer[i][19]<<endl<<endl;
                    }
                    break;
                  }

                  //Tambah Baju
                  case '2':
                  {
                    Baju tambah;
                    cin.ignore();
                    cout<<"Nama   : ";
                    getline(cin, tambah.nama);
                    cout<<"Ukuran : ";
                    cin>>tambah.ukuran;
                    cout<<"Harga  : ";
                    cin>>tambah.harga;
                    data.open("baju.txt", ios::out|ios::app);
                    
                    data<<tambah.harga<<" "<<tambah.nama<<"#"<<tambah.ukuran<<"#";
                    data.close();
                    break;
                  }

                  //Jadwal Shift Pelayan
                  case '3':
                  {
                    cout<<"jadwal shift maksimal 4 orang!!!"<<endl;
                    cout<<"masukan jadwal shift hari ini "<<endl;
                    stack :
                    ofstream tulisStack;
                    tulisStack.open("pelayan.txt");
                    
                    for(int a = 0; a < top; a++)
                    {
                      tulisStack<<dataStack[a]<<endl;
                    }
                    
                    tulisStack.close();
                    display();

                    cout<<"1.push"<<endl;
                    cout<<"2.pop"<<endl;
                    cout<<"3.kembali"<<endl;
                    cout<<"pilih : ";
                    cin>>pil;
                    if(pil == 1)
                    {
                      push();
                      goto stack;
                    } 
                    else if (pil == 2)
                    {
                      pop();
                      goto stack;
                    }
                    
                  break;
                  }

                  //Menampilkan Data Pelayan
                  case '4':
                  {
                  dr.setDetail();
                  break;
                  }

                  //Menampilkan Daftar CEO
                  case '5':
                    {
                      enqueueLinkedList("Joni", 19);
                      displayLinkedList();

                      enqueueLinkedList("Mamat", 20);
                      enqueueLinkedList("Siti", 18);
                      enqueueLinkedList("Bambang", 20);
                      enqueueLinkedList("Rudi", 23);
                      displayLinkedList();

                      enqueueLinkedList("Example", 23);
                      displayLinkedList();

                      dequeueLinkedList();
                      displayLinkedList();

                      clearLinkedList();
                      displayLinkedList();

                      cout << countLinkedList() << endl;
                         break;
                      }    
                  case '6':
                    {

	                    while(1){
		                  cout<<endl;
		                  cout<<"RIWAYAT KUNJUNGAN TOKO BAJU"<<endl;
		                  cout<<"--------------------"<<endl;
		                  cout<<"1. Insert/Tambah Data"<<endl;
		                  cout<<"2. Kunjungan In-Order"<<endl;
		                  cout<<"3. Menghitung Jumlah Node"<<endl;
		                  cout<<"4. Menghitung Tinggi Pohon"<<endl;
		                  cout<<"5. Mencari Data Terbesar"<<endl;
		                  cout<<"6. Exit"<<endl;
		                  cout<<"Pilihan Anda : ";
		                  cin>>ch;
		                  cout<<endl;
		                  switch(ch){
			                     case 1 : 
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (SENIN): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (SELASA): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (RABU): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (KAMIS): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (JUM'AT): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (SABTU): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    cout<<"Masukkan Banyak Pengunjung Minggu Ini (MINGGU): ";
				                    cin>>tmp;
				                    insert(tmp);
				                    break;
			                     case 2 : 
				                    cout<<endl;
			        	            cout<<"Kunjungan In-Order"<<endl;
				                    cout<<"---------------"<<endl;
				                    print_inorder();
				                    break;
			                    case 3 : 
			                      cout<<"Menghitung Jumlah Node"<<endl;
				                    cout<<"------------------"<<endl;
				                    cout<<"Jumlah Node = "<<count(root);
				
				                    break;
			                    case 4 : 
				                    cout<<"Menghitung Tinggi Pohon"<<endl;
				                    cout<<"------------------"<<endl;
				                    cout<<"Tinggi Pohon = "<<height(root);
				
				                    break;
			                    case 5 : 
				                    cout<<"Mecari Data Terbesar"<<endl;
				                    cout<<"------------------"<<endl;
				                    cout<<"Data Terbesar Adalah = "<<endl;
				                    cari_terbesar(root);
				
				                    break;
			                    case 6 : 
                            goto menu;
				                    break;
			                    default: 
				                    cout<<"Pilihan yang Anda Masukkan salah!"<<endl;
			
	
	                        break;
		                        }
	                        }
                      break;
                    }
                  case '7':
                    {
                      pel.det();
                      break;
                    }
                  case '8':
                  {
                     nodeptr root,root1,min,tinggi;
                     int a,choice,findele,delele;
                     char ch='y';
                       bstree bst;

                      root = NULL;
                      root1=NULL;
                      comeback:
                    cout<<"\n\t\t\t\tWELCOME TO WAREHOUSE "<<endl;
                    cout<<"\t\t\t\t:::::::::::::::::::\n"<<endl;
                    cout<<"\t\t================================================="<<endl;
                    cout<<"\t\t==tekan 1 untuk tambah stok baju                 |"<<endl;
                    cout<<"\t\t==tekan 2 untuk mencari stok baju paling sedikit |"<<endl;
                    cout<<"\t\t==tekan 3 untuk mencari stok baju paling banyak  |"<<endl;
                    cout<<"\t\t==tekan 4 untuk mencari stok baju                |"<<endl;
                    cout<<"\t\t==tekan 5 untuk hapus                            |"<<endl;
                    cout<<"\t\t==tekan 6 untuk display Preorder                 |"<<endl;
                    cout<<"\t\t==tekan 7 untuk display Inorder                  |"<<endl;
                    cout<<"\t\t==tekan 8 untuk display Postorder                |"<<endl;
                    cout<<"\t\t==tekan 9 untuk display the height of the tree   |"<<endl;
                    cout<<"\t\t==tekan 0 untuk kembali                          |"<<endl;
                    cout<<"\t\t==================================================\n"<<endl;

                   cout<<"\nmasukan pilihan: ";
                    cin>>choice;

            switch(choice)
                  {
            case 1:
            cout<<"\n\t\tADDING NEW NODE"<<endl;
            cout<<"\t\t:::::::::::::\n"<<endl;
            cout<<"Enter a new value: ";
            cin>>a;
            bst.insert(a,root);
            cout<<"\nThe new value have been added to your tree successfully\n"<<endl;
            goto comeback;
            break;
        case 2:
            if (root !=NULL)
            {
                min=bst.findmin(root);
                cout<<"\nThe minimum element in the tree is: "<<min->element<<endl;
                goto comeback;
            }
            break;
        case 3:
            if (root !=NULL)
            {
                tinggi=bst.findmax(root);
                cout<<"\nThe maximum element in the tree is: "<<tinggi->element<<endl;
                goto comeback;
            }
            break;
        case 4:
            cout<<"\nEnter node to search: ";
            cin>>findele;
            if (root != NULL)
            {
                bst.find(findele,root);
                goto comeback;
            }
            break;
        case 5:
            cout<<"\nEnter node to delete: ";
            cin>>delele;
            bst.del(delele,root);
            bst.inorder(root);
            cout<<endl;
            goto comeback;
            break;
        case 6:
            cout<<"\n\t\tPRE-ORDER TRAVERSAL"<<endl;
            bst.preorder(root);
            cout<<endl;
            goto comeback;
            break;
        case 7:
            cout<<"\n\t\tIN-ORDER TRAVERSAL"<<endl;
            bst.inorder(root);
            cout<<endl;
            goto comeback;
            break;
        case 8:
            cout<<"\n\t\tPOST ORDER TRAVERSAL"<<endl;
            bst.postorder(root);
            cout<<endl;
            goto comeback;
            break;
        case 9:
            cout<<"\n\t\tHEIGHT\n"<<endl;
            cout<<"The height of the tree is: "<<bst.bsheight(root)<<endl;
            goto comeback;

            break;
        case 0:
            cout<<"\n\tanda sudah mengisi/melihat gudang\n"<<endl;
            break;
        default:
            cout<<"Sorry! inputan salah\n"<<endl;
            break;
                  }
                  break;
                  }
                  //batas case 8 
                  // Log Out Program
                  case '9':
                  {
                    isMenuAdmin = false;
                    break;                    
                  }
                }                
              }
            }
            else
            {
              cout<<"Password atau NIK salah "<<endl;
            }
            break;
          }
          //login sebagai user
          case '2':
          {
            vector<Baju> baju;
            Baju buffer;
            int pilihBaju;
            int total = 0;
            char pilihMenuUser;
            int bayar, kembalian;
            float diskon = 0;
            cout<<"NIK      : ";
            cin>>nik;
            cout<<"Password : ";
            cin>>password;
            data.open("user/" + nik + ".txt");
            getline(data, password2);      
            if(data.is_open() && password == password2)
            {
              isLogin = true;
            }
            else
            {
              cout<<"NIK atau Password salah "<<endl;
              exit(1);
            }
            
            data.close();
            if(isLogin == true)
            {
              int a = 0;
              data.open("baju.txt", ios::in);
              while(data >> buffer.harga &&
                    getline(data, buffer.nama, '#') &&
                    getline(data, buffer.ukuran, '#'))
              {
                baju.push_back(buffer);
                a++;
              }
              data.close();
              
              isMenuUser = true;

              //Perulangan menampilkan menu user
              while(isMenuUser == true)
              {
                cout<<"-----------------------------"<<endl;
                cout<<"|    1. Lihat Keranjang     |"<<endl;
                cout<<"|    2. Daftar Baju         |"<<endl;
                cout<<"|    3. Bayar               |"<<endl;
                cout<<"|    4. FAQ                 |"<<endl;
                cout<<"|    5. Antrian             |"<<endl;
                cout<<"|    6. Log out             |"<<endl;
                cout<<"----------------------------="<<endl;
                cout<<"Pilih : ";
                cin>>pilihMenuUser;
                switch(pilihMenuUser)
                {

                  //Menampilkan Keranjang
                  case '1':
                  {
                    if(keranjang.size() == 0)
                    {
                      cout<<"Keranjang masih kosong"<<endl;
                    }
                    else
                    {
                      int a = 1;          
                      for(auto &x : keranjang)
                      {      
                        cout<<a<<". "<<x.nama<<" "<<x.ukuran;
                        cout<<"\t Rp. "<<x.harga<<endl;
                        a++;
                      }
                    }
                    break;
                  }

                  //menampilkan menu daftar baju
                  case '2':
                  {
                    std::vector<Baju> bacaBaju;
                    std::fstream data;
                    char pilihTampil;
                    int q;
                    bool isKembali = true;

                    while(isKembali == true){
                      q = 0;
                      cout<<"1. Array1D Dinamis"<<endl;
                      cout<<"2. Single Link List"<<endl;
                      cout<<"3. Double Link List"<<endl;
                      cout<<"4. Sort Baju"<<endl;
                      cout<<"5. Cari Baju"<<endl;
                      cout<<"Pilih : ";
                      cin>>pilihTampil;
  
                      switch(pilihTampil)
                      {
  
                        //Tampil menu baju dengan array1d dinamis
                        case '1':
                        {
                          Array1D<Baju> arrBaju(0);
                          std::vector<Baju> bacaBaju;
                          std::fstream data;
  
                          bacaBaju.clear();
                          data.open("baju.txt", ios::in);
                          while(data >> buffer.harga &&
                                getline(data, buffer.nama, '#') &&
                                getline(data, buffer.ukuran, '#'))
                          {
                            bacaBaju.push_back(buffer);            
                          }
                          data.close();
  
                          arrBaju.resize(bacaBaju.size());
                          for(int a = 0; a < bacaBaju.size(); a++)
                          {
                            arrBaju[a] = bacaBaju[a];
                            cout<<a+1<<". "<<arrBaju[a]<<endl;
                            q++;
                          }                        
                          break;
                        }
  
                        //menampilkan menu baju dengan single link list 
                        case '2':
                        {
                          List<Baju> singel;
                          std::vector<Baju> bacaBaju;
                          std::fstream data;
  
                          singel.clearList();
                          bacaBaju.clear();
                          data.open("baju.txt", ios::in);
                          while(data >> buffer.harga &&
                                getline(data, buffer.nama, '#') &&
                                getline(data, buffer.ukuran, '#'))
                          {
                            bacaBaju.push_back(buffer);
                            singel.sisip(buffer);
                            q++;
                          }
                          data.close();
                          singel.cetak();                        
                          break;
                        }
  
                        //menampilkan menu baju dengan double link list
                        case '3':
                        {
                          DoublyLinkedList<Baju> dobel;
                          std::vector<Baju> bacaBaju;
                          std::fstream data;
  
                          dobel.clearList();
                          bacaBaju.clear();
                          data.open("baju.txt", ios::in);
                          while(data >> buffer.harga &&
                                getline(data, buffer.nama, '#') &&
                                getline(data, buffer.ukuran, '#'))
                          {
                            bacaBaju.push_back(buffer);
                            dobel.add(buffer);
                            q++;
                          }
                          data.close();
                          dobel.cetakMaju();                        
                          break;                      
                        }
  
                        //menampilkan hasil sort
                        case '4':
                        {
                          std::vector<Baju> sortBaju;
                          Baju buffer;
                          sortBaju.clear();
                          data.open("baju.txt", ios::in);
                          while(data >> buffer.harga &&
                                getline(data, buffer.nama, '#') &&
                                getline(data, buffer.ukuran, '#'))
                          {
                            sortBaju.push_back(buffer);
                          }
                          data.close();
                          std::stable_sort(sortBaju.begin(), sortBaju.end(), hargaDesc);
                          for(int a = 0; a < sortBaju.size(); a++){
                            std::cout<<a + 1<<". "<<sortBaju.at(a)<<std::endl;
                            q++;
                          }
                          break;
                        }
  
                        //mencari baju berdasarkan merek
                        case '5':
                        {
                          std::vector<Baju> searchBaju;
                          std::string cari;
                          
                          std::cout<<"Cari Nama Baju : ";
                          std::cin>>cari;
                          
                          data.open("baju.txt", ios::in);
                          while(data >> buffer.harga &&
                                getline(data, buffer.nama, '#') &&
                                getline(data, buffer.ukuran, '#'))
                          {
                            searchBaju.push_back(buffer);
                          }
  
                          for(int a = 0, b = 0; a < searchBaju.size(); a++){
                            if(searchBaju.at(a).nama.find(cari) != std::string::npos){
                              std::cout<<b + 1<<searchBaju.at(a)<<std::endl;
                              b++;
                              q++;
                            }
                          }
                          data.close();
                          break; 
                        }
                        
                        default:
                          std::cout<<"Pilihan tidak tersedia"<<std::endl;
                      }
  
                      
  
                      bacaBaju.clear();
                      data.open("baju.txt", ios::in);
                      while(data >> buffer.harga &&
                            getline(data, buffer.nama, '#') &&
                            getline(data, buffer.ukuran, '#'))
                      {
                        bacaBaju.push_back(buffer);            
                      }
                      data.close();
  
                      cout<<++q<<". Kembali"<<endl;
                      cout<<"\nPilih : ";
                      cin>>pilihBaju;

                      std::cout << q << endl;
                      if(pilihBaju == q){
                        isKembali = false;
                      }
                      else if(pilihBaju - 1 < 0 || pilihBaju-1 > bacaBaju.size())
                      {
                        std::cout<<"Barang tidak tersedia"<<std::endl;
                        exit(1);                      
                      }
                      else
                      {
                        keranjang.push_back(bacaBaju.at(pilihBaju-1));
                      }  
                    }
                    break;
                  }      

                  //Menu Bayar
                  case '3':
                  {
                    ol.ekspedisi();
                    ol.provinsi();
                    ol.kota_tujuan();
                    ol.dataDiri();
                    std::string nama;
                    std::fstream data;
                    int a = 1;
                    total = 0;
                    kembalian = 0;
                    for(auto &x : keranjang)
                    {
                      total += x.harga;
                      cout<<a<<". "<<x.nama<<" "<<x.ukuran<<endl;
                      a++;
                    }
                    cout<<"\nTotal = "<<total<<endl;

                    //mendapat diskon 10% jika total biaya lebih dari 150000
                    if(total > 150000)
                    {
                      diskon = total * 0.1;
                      cout<<"Diskon 10% = "<<diskon<<endl;
                    }
                    cout<<"Total keseluruhan = "<<total-diskon<<endl;
                    cout<<"Bayar : ";
                    cin>>bayar;
                    if(bayar > total - diskon)
                    {
                      kembalian = bayar - (total - diskon);
                      cout<<"Kembalian = "<<kembalian<<endl;
                    }

                    else if(bayar < total - diskon)
                    {
                      cout<<"Uang tidak cukup"<<endl;
                      exit(1);
                    }
                    ol.output(keranjang, bayar, kembalian);
                    cout<<"Transaksi berhasil"<<endl;
                    data.open("KTP/DaftarKTP.txt", ios::in);
                    int b = 0;
                    while(getline(data, nama, '#'))
                    {
                      if(b == 3)
                      {
                        break;
                      }
                      b++;
                    }
                    data.close();
                    invoice(nama, keranjang, bayar, kembalian);
                  break;
                  }
                  case '4':
                  {
                  qna.Detail();
                  break;
                  }        

                  //menu antrian
                  case '5':
                  {                      
                    cout<<"Antrian maksimal 5 orang!!"<<endl;
                    cout<<"Ambil antrian "<<endl;
                    back:
                    ofstream tulisEnqueue;
                    tulisEnqueue.open("Antrian.txt");
                    for(int a = 0; a < Top; a++)
                    {
                      tulisEnqueue<<dataEnqueue[a]<<endl;                                     }
                    tulisEnqueue.close();
                    view();

                    cout<<"1.enQueue"<<endl;
                    cout<<"2.deQueue"<<endl;
                    cout<<"3.kembali"<<endl;
                    cout<<"pilih : ";
                    cin>>pil;
                    if(pil == 1)
                    {
                      enqueue();
                      goto back;
                    } 
                    else if (pil == 2)
                    {
                     dequeue();
                     goto back;
                    }                      
                    break;
                  } 
                  case '6':
                  {
                    isMenuUser = false;
                    break;
                  }
                        
                                                            
                }              
              }
            }
            break;
          
          }
        }
        break;
      }

      //Menampilkan menu Daftar
      case '3':
      {
        string nik, password;
        char pilihTipeUser;
        cout<<"========================"<<endl;
        cout<<"|       1. Admin       |"<<endl;
        cout<<"|       2. User        |"<<endl;
        cout<<"========================"<<endl;
        cout<<"Pilih : ";
        cin>>pilihTipeUser;
        switch(pilihTipeUser)
        {

          //menampilkan daftar menu admin
          case '1':
            cout<<"Masukkan NIK     : ";  
            cin>>nik;
            if(!_proses.cekKTP(nik))
            {
              cout<<"NIK tidak terdaftar"<<endl;
              exit(1);
            }
            cout<<"Masukkan Password : ";
            cin>>password;
            tulisPendaftaran(pilihTipeUser, nik, password);
            cout<<"Berhasil daftar"<<endl;
            break;

          //menampilkan daftar menu user
          case '2':
            cout<<"Masukkan NIK : ";  
            cin>>nik;
            if(!_proses.cekKTP(nik))
            {
              cout<<"NIK tidak terdaftar"<<endl;
              exit(1);
            }
            cout<<"Masukkan Password : ";
            cin>>password;
            tulisPendaftaran(pilihTipeUser, nik, password);
            cout<<"Berhasil daftar"<<endl;          
        }
        break;
      }

      //keluar program
      case '4':
      {
        isMenuUtama = false;
        break;   
      }
    }
  }
  return 0;    
}