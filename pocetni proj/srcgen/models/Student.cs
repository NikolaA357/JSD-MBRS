using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace FaxWebSite.Models
{
    public class Student
    {
        public int idstudent { get; set; }
        public string firstname { get; set; }
        public string lastname { get; set; }
        public date datum { get; set; }
    //ovo je statik
        public int ID { get; set; }
        public string LastName { get; set; }
        public string FirstMidName { get; set; }
        public DateTime EnrollmentDate { get; set; }
        public string Secret { get; set; }

        public virtual ICollection<Enrollment> Enrollments { get; set; }
    }
}