import {React, useState} from 'react';
import './App.css';


function NameInputField({name, setName}){
  const uponChange = (e) => {
    setName(e.target.value);
  }
  return (
    <div className='input-field'>
      <input type='text' value={name} onChange={uponChange} placeholder='First and Last name'/>
    </div>
  );
}


function Mobile({CountryCode, setCountryCode, mobile, setMobile}){

  const uponChange = (e) => {
    setCountryCode(e.target.value);
    setMobile(e.target.value);
  }
  return(
    <div className='input-field'>
    <select name="country_code" required value={CountryCode} onChange={uponChange}>
      <option value="+91">IN +91</option>
      <option value="+354">Iceland +354</option>
      <option value="+98">Iran +98</option>
    </select>

    <input type='text' value={mobile} onChange={uponChange} placeholder='Enter your mobile number'/>

    </div>
  );
}

function EmailInput({email, setEmail}){
  const uponChange = (e) => {
    setEmail(e.target.value);
  }

  return(
    <div className='input-field'>
      <input type='email' value={email} onChange={uponChange} placeholder='Enter your email'/>
    </div>
  );
}

function PasswordInput({password, setPassword}){
  const uponChange = (e) => {
    setPassword(e.target.value);
  }

  return(
    <div className='input-field'>
      <input type='password' value={password} onChange={uponChange} placeholder='Enter your password'/>
    </div>
  );
}

function verify(name, mobile, email, password) {
  if (name === '') {
    alert('Please enter your name');
  }
  else if (mobile === '') {
    alert('Please enter your mobile number');
  }
  else if (email === '') {
    alert('Please enter your email');
  }
  else if (password === '') {
    alert('Please enter your password');
  }
  else {
    if (name.length > 20){alert('Name should be less than 20 characters');}

    if (mobile.length !== 10){alert('Mobile number should be 10 digits');}

    if (email.length > 50){alert('Email should be less than 50 characters');}

    if (password.length < 8){alert('Password should be atleast 8 characters');}

    else{
      const hasNumber = /\d/;
        if (!hasNumber.test(password)) {
          alert('Password should contain at least one number');
          return;
        }

        const mobileRegex = /^[0-9]+$/;
        if (!mobileRegex.test(mobile)) {
          alert('Mobile number should only contain numbers');
          return;
        }

        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
       if (!emailRegex.test(email)) {
          alert('Please enter a valid email');
          return;
      }

      alert('Account created successfully');

    }
    }
}

function App(){
  const [name, setName] = useState('');
  const [password, setPassword] = useState('');
  const [email, setEmail] = useState('');
  const [countryCode, setCountryCode] = useState('+91');
  const [mobile, setMobile] = useState('');
    return (
        <div className='MainPage'>
          <div className='logo-image'> <img src={process.env.PUBLIC_URL+"./images/logo.jpg"}/></div>

          <div className='wrapper'>

            <div className='create-account-tag'>
              <p>Create Account</p>
            </div>

            <p><b>Your name</b></p>
            <NameInputField name={name} setName={setName}/>

            <p><b>Mobile Number</b></p>
            <Mobile mobile={mobile} setMobile={setMobile} setCountryCode={setCountryCode} countryCode={countryCode}/>

            <p><b>Email</b></p>
            <EmailInput email={email} setEmail={setEmail}/>

            <p><b>Password</b></p>
            <PasswordInput password={password} setPassword={setPassword}/>

            <div class="info-para">
                <p>
                    To verify your number, we will send you a text message with a temporary code. Message and data rates may apply.
                </p>
            </div>

            <div class="register-button">
                <button type="button" onClick={()=> verify(name, mobile, email, password)}><b>Create Account</b></button>
            </div>
          </div>
        </div>
    );
}

export default App;