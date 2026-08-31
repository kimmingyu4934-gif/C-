using Microsoft.VisualBasic;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            int a = 0;
            if (a == 0)
            {
                MessageBox.Show("hi");
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            label1.Text = "aaaaa";

        }
    }
}
