extern crate regex;
use regex::Regex;
use std::io;

fn main() {
    let mut mailid = String::new();
    println!("Enter your mailid:", );
    io::stdin().read_line(&mut mailid).expect("Error Please try again later"); 
    if Regex::new(r"^[a-zA-Z0-9]+@[a-z][.]?[a-z]*").unwrap().is_match(&mut mailid) == true 
     {
        println!("The mailid you entered is valid ");
    }
    else {
        println!("The mailid you entered is invalid ");
    }
}
