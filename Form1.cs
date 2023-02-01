using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LIBRARY_MANAGEMENT_SYSTEM_EVEN
{
    public partial class Form1 : Form
    {
        public List<book> arr_Library_Books = new List<book>();
        public List<regular_Users> arr_Regular_user= new List<regular_Users>();
        public List<special_user> arr_Special_user=new List<special_user>();
        public List<rent> arr_rent= new List<rent>();
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void add_u_button_Click(object sender, EventArgs e)
        {
            string _type=add_user_type_comboBox.Text;

            if(_type=="Regular User")
            {
                regular_Users r_u = new regular_Users(Convert.ToInt32(add_u_ID_textBox.Text),add_u_Name_textBox.Text,add_u_Address_textBox.Text);

                arr_Regular_user.Add(r_u);
                rent_uid_comboBox.Items.Add(add_u_ID_textBox.Text);//adding user id to the rent u_id combobox
                
            }
            else
            {
                special_user s_u = new special_user(Convert.ToInt32(add_u_ID_textBox.Text), add_u_Name_textBox.Text, add_u_Address_textBox.Text);
                arr_Special_user.Add(s_u);
                
            }
            
            curr_u_comboBox.Items.Add(add_u_ID_textBox.Text);//adding user id to the book_handler combobox

            add_u_ID_textBox.Clear();
            add_u_Name_textBox.Clear() ;
            add_u_Address_textBox.Clear();
            
        }

        private void rent_book_button_Click(object sender, EventArgs e)
        {
            int _book_id=Convert.ToInt32(rent_book_id_comboBox.Text);
            int _user_id = Convert.ToInt32(rent_uid_comboBox.Text);
            int _duration=Convert.ToInt32(duration_comboBox.Text);
            bool flag = false;
            
            for(int i=0;i<arr_Library_Books.Count;i++)
            {
                if (_book_id == arr_Library_Books[i].id)
                {
                    if (arr_Library_Books[i].quantity>1)
                    {
                        arr_Library_Books[i].quantity--;
                        flag = true;
                        break;
                    }
                }
            }

            if (flag)
            {
                utility.RentaBook(_book_id, _user_id, _duration, arr_rent);

            }
            else
            {
                MessageBox.Show("OUT OF STOCK!");
            }

            

        }

        private void add_book_button_Click(object sender, EventArgs e)
        {

            string _id = curr_u_comboBox.Text;
            int _ind=0;
            bool flag = false;
            for (int i = 0; i < arr_Special_user.Count; i++)
            {
                if (Convert.ToInt32(_id) == arr_Special_user[i].id)
                {
                    _ind = i;
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                bool flag_found=false;
                for(int i=0;i<arr_Library_Books.Count;i++)
                {
                    if (Convert.ToInt32(add_book_Id_textBox.Text) == arr_Library_Books[i].id)
                    {
                        arr_Library_Books[i].quantity+=Convert.ToInt32(add_b_quantity_textBox.Text); 
                        flag_found= true;
                        break;
                    }
                }

                if (flag_found == false)
                {
                    book temp = new book(Convert.ToInt32(add_book_Id_textBox.Text), add_b_title_textBox.Text, add_b_author_textBox.Text, add_b_publisher_textBox.Text, Convert.ToInt32(add_b_quantity_textBox.Text));
                    arr_Special_user[_ind].AddBook(temp, arr_Library_Books);
                    rent_book_id_comboBox.Items.Add(add_book_Id_textBox.Text);//inserts book id in the rent section at combobox
                }
                add_book_Id_textBox.Clear();
                add_b_title_textBox.Clear();
                add_b_author_textBox.Clear();
                add_b_publisher_textBox.Clear();
                add_b_quantity_textBox.Clear();
            }
            else
            {
                MessageBox.Show("Insufficient Rights!");
            }

        }

        private void del_book_button_Click(object sender, EventArgs e)
        {
            string _id = curr_u_comboBox.Text;
            int _ind = 0;
            bool flag = false;
            for (int i = 0; i < arr_Special_user.Count; i++)
            {
                if (Convert.ToInt32(_id) == arr_Special_user[i].id)
                {
                    _ind= i;
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                book temp = new book(Convert.ToInt32(add_book_Id_textBox.Text), add_b_title_textBox.Text, add_b_author_textBox.Text, add_b_publisher_textBox.Text, Convert.ToInt32(add_b_quantity_textBox.Text));
                arr_Special_user[_ind].RemoveBook(temp, arr_Library_Books);

                add_book_Id_textBox.Clear();
                add_b_title_textBox.Clear();
                add_b_author_textBox.Clear();
                add_b_publisher_textBox.Clear();
                add_b_quantity_textBox.Clear();

            }
            else
            {
                MessageBox.Show("Insufficient Rights!");
            }

        }

        private void show_book_button_Click(object sender, EventArgs e)
        {
            book_listBox.Items.Clear();
            for(int i=0;i<arr_Library_Books.Count;i++)
            {
                string s = $"{arr_Library_Books[i].id}\t     {arr_Library_Books[i].title}\t\t{arr_Library_Books[i].author}\t\t{arr_Library_Books[i].quantity}";
                
                book_listBox.Items.Add(s);
            }
        }
    }
}
