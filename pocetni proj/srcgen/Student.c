


class Student {

  protected  $idstudent;
  protected  $firstname;
  protected  $lastname;
  protected  $datum;

  function __construct() {
  }

  function getIdstudent(){
    return $this->idstudent;
  }

  function setIdstudent($idstudent){
    $this->idstudent = $idstudent;
  }

  function getFirstname(){
    return $this->firstname;
  }

  function setFirstname($firstname){
    $this->firstname = $firstname;
  }

  function getLastname(){
    return $this->lastname;
  }

  function setLastname($lastname){
    $this->lastname = $lastname;
  }

  function getDatum(){
    return $this->datum;
  }

  function setDatum($datum){
    $this->datum = $datum;
  }


  public function jsonSerialize() {
    return (object) get_object_vars($this);
  }

  public function jsonDeserialize() {
      $this->idstudent = $data->{'idstudent'};
      $this->firstname = $data->{'firstname'};
      $this->lastname = $data->{'lastname'};
      $this->datum = $data->{'datum'};
  }

  public function ValidateFields()
  {
      $this->idstudent = formatInput($this->idstudent);
      $this->firstname = formatInput($this->firstname);
      $this->lastname = formatInput($this->lastname);
      $this->datum = formatInput($this->datum);

  }

}
