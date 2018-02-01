


class Course {

  protected  $idcourse;
  protected  $name;

  function __construct() {
  }

  function getIdcourse(){
    return $this->idcourse;
  }

  function setIdcourse($idcourse){
    $this->idcourse = $idcourse;
  }

  function getName(){
    return $this->name;
  }

  function setName($name){
    $this->name = $name;
  }


  public function jsonSerialize() {
    return (object) get_object_vars($this);
  }

  public function jsonDeserialize() {
      $this->idcourse = $data->{'idcourse'};
      $this->name = $data->{'name'};
  }

  public function ValidateFields()
  {
      $this->idcourse = formatInput($this->idcourse);
      $this->name = formatInput($this->name);

  }

}
